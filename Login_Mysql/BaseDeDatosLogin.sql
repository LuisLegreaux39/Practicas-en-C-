CREATE table datos(
id_cliente int auto_increment,
NOMBRE varchar(100),
APELLIDO varchar(100),
EDAD int,
PRIMARY key(id_cliente)
);

INSERT INTO CLIENTE.datos(NOMBRE,APELLIDO,EDAD) VALUES ('odette','herrera',42)

SELECT * FROM CLIENTE.datos where NOMBRE='PEDRO'

SELECT * FROM CLIENTE.datos

CREATE TABLE USUARIO(
ID_user INT NOT null auto_increment,
userName varchar(20) NOT null,
userPassword varchar(20),
PRIMARY KEY(ID_user)
);
SELECT * FROM CLIENTE.USUARIO

INSERT INTO CLIENTE.USUARIO(userName,userPassword) value("ROOT","ROOT");
