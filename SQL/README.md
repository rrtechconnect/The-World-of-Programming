
**1. Getting started with SQL**

A Database is a collection of data and holds this data in the form of tables.
what is a table- An entity that holds the data in the form of rows and columns. It is similar to excel spreadsheet.
The database provides us the capability to access and manipulate this data.

**Two types of Databases**

1. Relational database - Data is stored in the form of rows and columns and also have a relationship between them.

    Ex. MySQL, SQL server, PostgreSQL, SQLite, MariaDB

2. NOSQL Database - Key Value store, Document Database, each table is different to another.

    Ex. Hbase, mongoDB, cassandra (Have their own languages)

These databases differ in terms of their features and functionality

**SQL**

    SQL - Structured Query Language

    MySQL(Database) vs SQL( The way we interact with the MySQL, is used to query a relational database)

    SQL holds good for all relational databases

**Installation**

    Learn Online at https://ide.goorm.io/

    Install goormIDE

    Create a container select nodejs stack

    start MySQL by typing the following command 

    mysql-ctl cli;

    Few basic SQL commands

    SHOW databases;

    CREATE DATABASE github

    USE github

    CREATE TABLE employee
    (
    name varchar(50),
    salary INT,
    Age INT
    );

    CREATE TABLE employee.github
    (
    name varchar(50),
    salary INT,
    Age INT
    );

**2. CRUD Operations**

    CRUD
    
    Create --  insert statements
    
    Read -- select statements
    
    Update -- update statements
    
    Delete -- delete statements
    
    Creation of table and insert statements
    
    employee table
    
    CREATE TABLE employee (
    firstname varchar(20),
    middlename varchar(20),
    lastname varchar(20),
    age int,
    salary int,
    location varchar(20)
    );
    
    Above one is the TTL statement
    
    ***NULL VALUES***
    
    CREATE TABLE employee(firstname varchar(20), middlename varchar(20), lastname varchar(20),age int, salary int, location varchar(20));
    
    DESC employee;
    
    DROP TABLE employee;
    
    **Create Table with NULL NOT update**
    
    Only allow middle name to be NULL
    
    CREATE TABLE employee(firstname varchar(20) NOT NULL,
    middlename varchar(20), 
    lastname varchar(20) NOT NULL,
    age int NOT NULL,
    salary int NOT NULL,
    location varchar(20) NOT NULL);
    
    INSERT INTO employee (firstname, middlename, lastname, age, salary, location) VALUES ('Rama','Reddy','Rajanna',32,15000,'India');
    
    Allowed!!!
    
    INSERT INTO employee (middlename, lastname, age, salary, location) VALUES ('Reddy','Rajanna',32,15000,'India'); #Not Allowed!!! First Name cannot be NULL.
    
    ERROR 1364 (HY000): Field 'firstname' doesn't have a default value
    
    INSERT INTO employee (firstname, middlename, lastname, age, salary, location) VALUES ('Rama','Rajanna',32,15000,'India');
    Allowed!!!
    
    ***DEFAULT VALUES***
    
    drop table employee;
    
    CREATE TABLE employee(firstname varchar(20) NOT NULL,
    middlename varchar(20), 
    lastname varchar(20) NOT NULL,
    age int NOT NULL,
    salary int NOT NULL,
    location varchar(20) DEFAULT 'Bangalore');
    
    INSERT INTO employee(firstname, lastname, age, salary) VALUES ('Kapil', 'sharma', 55, 4567);
    INSERT INTO employee(firstname, lastname, age, salary,location) VALUES ('Kapil', 'sharma', 55, 4567, 'Hyderabad');
    
    mysql> select * from employee;
    +-----------+------------+----------+-----+--------+-----------+
    | firstname | middlename | lastname | age | salary | location  |
    +-----------+------------+----------+-----+--------+-----------+
    | Kapil     | NULL       | sharma   |  55 |   4567 | Bangalore |
    | Kapil     | NULL       | sharma   |  55 |   4567 | Hyderabad |
    +-----------+------------+----------+-----+--------+-----------+
    2 rows in set (0.00 sec)
    
    INSERT INTO employee(firstname, lastname, age, salary,location) VALUES ('rajesh', 'sharma', 55, 4567, null);
    
    ***Combination of NOT NULL & DEFAULT TOGETHER ****
    
    CREATE TABLE employee(firstname varchar(20) NOT NULL,
    middlename varchar(20), 
    lastname varchar(20) NOT NULL,
    age int NOT NULL,
    salary int NOT NULL,
    location varchar(20) NOT NULL DEFAULT 'Bangalore');
    
    INSERT INTO employee(firstname, lastname, age, salary,location) VALUES ('ramesh', 'sharma', 55, 4567, null);
  
    ERROR 1048 (23000): Column 'location' cannot be null
    
    INSERT INTO employee(firstname, lastname, age, salary) VALUES ('ramesh', 'sharma', 55, 4567);

   ***3. Primary Key vs Unique Key***
