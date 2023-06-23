-- Write a PL/SQL block to find the square of a number inputted with a substitution variable and print results using DBMS_OUTPUT.

SET SERVEROUTPUT ON

DECLARE
    num NUMBER;
    result NUMBER;

BEGIN
    num := &num;

    result := num * num;

    DBMS_OUTPUT.PUT_LINE('The square of ' || num || ' is ' || result);

END;
/