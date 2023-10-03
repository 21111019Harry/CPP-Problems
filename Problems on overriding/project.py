import pandas as pd
from sklearn.ensemble import RandomForestRegressor, VotingRegressor
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error
from sklearn.model_selection import train_test_split

# Load the dataset
dataset = pd.read_csv('air_quality_dataset.csv')

# Preprocess the data by removing missing values and outliers
dataset.dropna(inplace=True)
dataset = dataset[dataset['AQI'] <= 500]

# Split the dataset into training and test sets
X = dataset.drop(['AQI'], axis=1)
y = dataset['AQI']
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=42)

# Normalize the features
mean = X_train.mean()
std = X_train.std()
X_train_norm = (X_train - mean) / std
X_test_norm = (X_test - mean) / std

# Divide the training set into subsets using k-fold cross-validation
n_splits = 5
kf = KFold(n_splits=n_splits, shuffle=True, random_state=42)
models = []

# Train individual models on each subset of the training data
for train_index, val_index in kf.split(X_train_norm):
    X_train_fold = X_train_norm.iloc[train_index]
    y_train_fold = y_train.iloc[train_index]
    X_val_fold = X_train_norm.iloc[val_index]
    y_val_fold = y_train.iloc[val_index]
    model1 = LinearRegression().fit(X_train_fold, y_train_fold)
    model2 = RandomForestRegressor(n_estimators=50, random_state=42).fit(X_train_fold, y_train_fold)
    model3 = RandomForestRegressor(n_estimators=100, random_state=42).fit(X_train_fold, y_train_fold)
    ensemble_model = VotingRegressor([('lr', model1), ('rf1', model2), ('rf2', model3)])
    ensemble_model.fit(X_train_fold, y_train_fold)
    models.append(ensemble_model)

# Combine the models using voting
ensemble_model = VotingRegressor(models)

# Test the model on the test set
y_pred = ensemble_model.predict(X_test_norm)
mse = mean_squared_error(y_test, y_pred)
rmse = np.sqrt(mse)
r_squared = ensemble_model.score(X_test_norm, y_test)

print("MSE:", mse)
print("RMSE:", rmse)
print("R-squared:", r_squared)






