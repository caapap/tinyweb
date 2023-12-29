# tinyweb
tiny webserver by cpp

# database config
# mysql
// create yourdb
create database yourdb;

//create user table
USE yourdb;
CREATE TABLE user(
    username char(50) NULL,
    passwd char(50) NULL
)ENGINE=InnoDB;

// add information
INSERT INTO user(username, passwd) VALUES('name', 'passwd');
