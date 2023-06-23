-- Write a PL/SQL block to print the values 1 to 10 in reverse order using for loop.

SET SERVEROUTPUT ON

BEGIN
    FOR i IN REVERSE 1..10 LOOP
        DBMS_OUTPUT.PUT_LINE(i);
    END LOOP;

END;
/