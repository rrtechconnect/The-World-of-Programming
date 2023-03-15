**1. Introduction to Spark**

**2. The Power of Spark**

**3. Data Wrangling with Spark**

**4. Setting up Spark Cluster with AWS**

**5. Debugging and Optimization**

**6. Machine Learning with Spark**

**Machine Learning with Spark**

a) Feature Creation
b) Model Training
c) Hyperparameter Tuning
d) Capabilities & Limitations
e) Train Model at Scale

Spark’s latest release - version 2.2.1 - supports two machine learning libraries spark.ml and spark.mllib. Both libraries are part of Spark's Machine Learning Library known as MLlib.

The term "Spark ML" is sometimes used to refer to the Spark Machine Learning library, which is officially called "MLlib"


a) Feature Extraction

Numeric Features
**Scalers**

  Normalizer
  StandardScaler
  MinMaxScaler
  MaxAbsScale

**Indexers**

  StringIndexer
  IndexToString
  VectorIndexer
  
b) Text Processing

Tokenization
Tokenization splits strings into separate words. Spark has a Tokenizer class as well as RegexTokenizer, which allows for more control over the tokenization process.

CountVectorizer

Inter-document Frequency

c) Dimensionality Reduction

d) Supervised ML Algorithms

Classification Algorithms
    Logistic Regression
    Random Forest
    Gradient Boosted Trees
    Support Vector Machines
    Naive Bayes
    
Regression Algorithms
    Linear Regression
    Generalized Linear Regression
    Tree based Regression
    
d) Unsupervised ML Algorithms
    K-means
    Latent Dirichilet Allocation
    Gaussian Mixture Model
    
e) ML Pipeline

Transformers --> Transformers --> Estimators -->Estimators--> Transformers

Transformers :
Text --> Tokenizer-->Numeric column-->Trained Logistic Regression--> Prediction

Transformers & Estimators (Bold Highlighted) :

Text --> Tokenizer-->Numeric column-->**Untrained Logistic Regression**--> Trained Logistic Regression-->Prediction

f) Model Selection and Tuning
