-- Write a PL/SQL block which takes student information as input and then display it.

SET SERVEROUTPUT ON

DECLARE
    rollno NUMBER;
    name VARCHAR(20);

BEGIN
    rollno := &rollno;
    name := '&name';

    DBMS_OUTPUT.PUT_LINE('Your rollno is '||rollno);
    DBMS_OUTPUT.PUT_LINE('Your name is '||name);

END;
/