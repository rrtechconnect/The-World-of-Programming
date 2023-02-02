
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
   
   what we have learnt in section 2:
           CRUD
           Insert Statement

           Simple Inserts

           Multiple Inserts

           Datatype Mismatch

           Null vs not Null

           Default values
   
   In this section we discuss about
   
           Primary Key

           Auto Increment Keys

           unique Key

           Primaary Key vs Unique Key
    
    mysql> INSERT INTO employee(firstname, lastname, age, salary) VALUES ('ramesh', 'sharma', 55, 4567);
    Query OK, 1 row affected (0.04 sec)

        mysql> select * from employee;
        +-----------+------------+----------+-----+--------+-----------+
        | firstname | middlename | lastname | age | salary | location  |
        +-----------+------------+----------+-----+--------+-----------+
        | ramesh    | NULL       | sharma   |  55 |   4567 | Bangalore |
        | ramesh    | NULL       | sharma   |  55 |   4567 | Bangalore |
        +-----------+------------+----------+-----+--------+-----------+
        2 rows in set (0.00 sec)

        Let say you have two persons with same name age  salary and same location how do you identify them uniquely
    
        That's when we use the primary key to uniquely identify each record.

      Create a Table with ID;
      
        mysql> CREATE TABLE employee(id int, firstname varchar(20) NOT NULL, middlename varchar(20),lastname varchar(20) NOT N
        ULL, age int NOT NULL,Salary int NOT NULL,location varchar(20) NOT NULL DEFAULT 'Bangalore');
        Query OK, 0 rows affected (0.07 sec)

        mysql> INSERT INTO employee(id, firstname, lastname, age, salary) VALUES (1,'ramesh', 'sharma', 55, 4567);
        Query OK, 1 row affected (0.00 sec)

        mysql> INSERT INTO employee(id, firstname, lastname, age, salary) VALUES (1,'ramesh', 'sharma', 55, 4567);
        Query OK, 1 row affected (0.04 sec)
        
        mysql> select * from employee;
        +------+-----------+------------+----------+-----+--------+-----------+
        | id   | firstname | middlename | lastname | age | Salary | location  |
        +------+-----------+------------+----------+-----+--------+-----------+
        |    1 | ramesh    | NULL       | sharma   |  55 |   4567 | Bangalore |
        |    1 | ramesh    | NULL       | sharma   |  55 |   4567 | Bangalore |
        +------+-----------+------------+----------+-----+--------+-----------+
        2 rows in set (0.00 sec)
        
        But here two records created with same ID 1. This is not what we expected.
        
    CREATE TABLE employee(id int **PRIMARY KEY**, firstname varchar(20) NOT NULL, middlename varchar(20),lastname varch
    ar(20) NOT NULL, age int NOT NULL,Salary int NOT NULL,location varchar(20) NOT NULL DEFAULT 'Bangalore');
    Query OK, 0 rows affected (0.05 sec)
    
    mysql> desc employee;
    +------------+-------------+------+-----+-----------+-------+
    | Field      | Type        | Null | Key | Default   | Extra |
    +------------+-------------+------+-----+-----------+-------+
    | id         | int(11)     | NO   | PRI | NULL      |       |
    | firstname  | varchar(20) | NO   |     | NULL      |       |
    | middlename | varchar(20) | YES  |     | NULL      |       |
    | lastname   | varchar(20) | NO   |     | NULL      |       |
    | age        | int(11)     | NO   |     | NULL      |       |
    | Salary     | int(11)     | NO   |     | NULL      |       |
    | location   | varchar(20) | NO   |     | Bangalore |       |
    +------------+-------------+------+-----+-----------+-------+
    7 rows in set (0.00 sec)
    
    Now Notice the PRI under Key let;s insert the same employee in to the table table.
    
    mysql> INSERT INTO employee(id, firstname, lastname, age, salary) VALUES (1,'ramesh', 'sharma', 55, 4567);
    Query OK, 1 row affected (0.01 sec)

    mysql> INSERT INTO employee(id, firstname, lastname, age, salary) VALUES (1,'ramesh', 'sharma', 55, 4567);
    **ERROR 1062 (23000): Duplicate entry '1' for key 'PRIMARY'**
    
    For a Primary key NULL  is not allowed also the repated entries are also not allowed
    
    mysql> INSERT INTO employee(id, firstname, lastname, age, salary) VALUES (NULL,'ramesh', 'sharma', 55, 4567);
    **ERROR 1048 (23000): Column 'id' cannot be null**
    
    mysql> CREATE TABLE employee(id int AUTO_INCREMENT, firstname varchar(20) NOT NULL, middlename varchar(20),lastname varchar(20) NOT NULL, age int NOT NULL,Salary       int NOT NULL,location varchar(20) NOT NULL DEFAULT 'Bangalore', PRIMARY KEY(ID));
        Query OK, 0 rows affected (0.15 sec)

        mysql> desc employee;
        +------------+-------------+------+-----+-----------+----------------+
        | Field      | Type        | Null | Key | Default   | Extra          |
        +------------+-------------+------+-----+-----------+----------------+
        | id         | int(11)     | NO   | PRI | NULL      | auto_increment |
        | firstname  | varchar(20) | NO   |     | NULL      |                |
        | middlename | varchar(20) | YES  |     | NULL      |                |
        | lastname   | varchar(20) | NO   |     | NULL      |                |
        | age        | int(11)     | NO   |     | NULL      |                |
        | Salary     | int(11)     | NO   |     | NULL      |                |
        | location   | varchar(20) | NO   |     | Bangalore |                |
        +------------+-------------+------+-----+-----------+----------------+
        7 rows in set (0.06 sec)

  Lets insert some details now.
        mysql> INSERT INTO employee(firstname, lastname, age, salary) VALUES ('ramesh', 'sharma', 55, 4567);
        Query OK, 1 row affected (0.01 sec)

        mysql> INSERT INTO employee(firstname, lastname, age, salary) VALUES ('kamalesh', 'sharma', 55, 4567);
        Query OK, 1 row affected (0.01 sec)

        mysql> INSERT INTO employee(firstname, lastname, age, salary) VALUES ('kantesh', 'sharma', 55, 4567);
        Query OK, 1 row affected (0.07 sec)

        mysql> INSERT INTO employee(firstname, lastname, age, salary) VALUES ('kujulesh', 'sharma', 55, 4567);
        Query OK, 1 row affected (0.01 sec)

        mysql> select * from employee;
        +----+-----------+------------+----------+-----+--------+-----------+
        | id | firstname | middlename | lastname | age | Salary | location  |
        +----+-----------+------------+----------+-----+--------+-----------+
        |  1 | ramesh    | NULL       | sharma   |  55 |   4567 | Bangalore |
        |  2 | kamalesh  | NULL       | sharma   |  55 |   4567 | Bangalore |
        |  3 | kantesh   | NULL       | sharma   |  55 |   4567 | Bangalore |
        |  4 | kujulesh  | NULL       | sharma   |  55 |   4567 | Bangalore |
        +----+-----------+------------+----------+-----+--------+-----------+
        4 rows in set (0.00 sec)
Remember 

You can have only one primary key and the primary cannot be NULL. We should use primary key when we should uniquely identify each record.

Unique key can hold NULL, for example in MySQL a unique key can hold any number of values in some of the other well known DB's unique key hold only one NULL.

So, the purpose of Unique is to make sure that the values do not duplicate.

We can have one primary key but multiple unique key in  a table.

CREATE TABLE employee(
firstname varchar(20) NOT NULL,
lastname varchar(20) NOT NULL,
age int NOT NULL,
primary key(firstname, lastname)
);

insert into employee values('kapil', 'rama',28);
insert into employee values('kapil', 'sharma',28);

Try inserting same again it will not work. 
mysql> insert into employee values('kapil', 'sharma',28);
ERROR 1062 (23000): Duplicate entry 'kapil-sharma' for key 'PRIMARY'
mysql> insert into employee values('kapil', 'rama',28);
ERROR 1062 (23000): Duplicate entry 'kapil-rama' for key 'PRIMARY'
mysql>

The composite primary works.

CREATE TABLE employee(
id int UNIQUE KEY,
firstname varchar(20),
lastname varchar(20),
age int NOT NULL,
);


    mysql> desc employee;
    +-----------+-------------+------+-----+---------+-------+
    | Field     | Type        | Null | Key | Default | Extra |
    +-----------+-------------+------+-----+---------+-------+
    | id        | int(11)     | YES  | UNI | NULL    |       |
    | firstname | varchar(20) | YES  |     | NULL    |       |
    | lastname  | varchar(20) | YES  |     | NULL    |       |
    | age       | int(11)     | NO   |     | NULL    |       |
    +-----------+-------------+------+-----+---------+-------+
    4 rows in set (0.00 sec)
    
    insert into employee values(1, 'kapil', 'sharma', 34);

        mysql> insert into employee values(1, 'kapil', 'sharma', 34);
        Query OK, 1 row affected (0.01 sec)

        mysql> insert into employee values(1, 'kapil', 'sharma', 34);
        ERROR 1062 (23000): Duplicate entry '1' for key 'id'
        mysql> insert into employee values(NULL, 'kapil', 'sharma', 34);
        Query OK, 1 row affected (0.01 sec)

        mysql> insert into employee values(NULL, 'kapil', 'sharma', 34);
        Query OK, 1 row affected (0.01 sec)

        mysql> insert into employee values(NULL, 'kapil', 'sharma', 34);
        Query OK, 1 row affected (0.01 sec)

        mysql> insert into employee values(NULL, 'rama', 'sharma', 34);
        Query OK, 1 row affected (0.01 sec)

        mysql> desc employee;
        +-----------+-------------+------+-----+---------+-------+
        | Field     | Type        | Null | Key | Default | Extra |
        +-----------+-------------+------+-----+---------+-------+
        | id        | int(11)     | YES  | UNI | NULL    |       |
        | firstname | varchar(20) | YES  |     | NULL    |       |
        | lastname  | varchar(20) | YES  |     | NULL    |       |
        | age       | int(11)     | NO   |     | NULL    |       |
        +-----------+-------------+------+-----+---------+-------+
        4 rows in set (0.00 sec)

        mysql> select * from employee;
        +------+-----------+----------+-----+
        | id   | firstname | lastname | age |
        +------+-----------+----------+-----+
        |    1 | kapil     | sharma   |  34 |
        | NULL | kapil     | sharma   |  34 |
        | NULL | kapil     | sharma   |  34 |
        | NULL | kapil     | sharma   |  34 |
        | NULL | rama      | sharma   |  34 |
        +------+-----------+----------+-----+
        5 rows in set (0.00 sec)

CREATE TABLE employee(
id int,
firstname varchar(20),
lastname varchar(20),
age int NOT NULL,
UNIQUE KEY(id, age)
);


        mysql> insert into employee values(30, 'rama', 'sharma', 34);
        Query OK, 1 row affected (0.01 sec)

        mysql> insert into employee values(31, 'rama', 'sharma', 34);
        Query OK, 1 row affected (0.06 sec)

        mysql> insert into employee values(30, 'rama', 'bhama', 34);
        **ERROR 1062 (23000): Duplicate entry '30-34' for key 'id'**
        mysql> insert into employee values(NULL, 'rama', 'bhama', 34);
        Query OK, 1 row affected (0.01 sec)

        mysql> select * from employee;
        +------+-----------+----------+-----+
        | id   | firstname | lastname | age |
        +------+-----------+----------+-----+
        |   30 | rama      | sharma   |  34 |
        |   31 | rama      | sharma   |  34 |
        | NULL | rama      | bhama    |  34 |
        +------+-----------+----------+-----+
        3 rows in set (0.00 sec)
