-- Write a PL/SQL block to find maximum number from two numbers.

SET SERVEROUTPUT ON

DECLARE
    num1 NUMBER;
    num2 NUMBER;

BEGIN
    num1 := &num1;
    num2 := &num2;

    IF num1 > num2 THEN
        DBMS_OUTPUT.PUT_LINE(num1||' is greater than '||num2);

    ELSIF num1 < num2 THEN
        DBMS_OUTPUT.PUT_LINE(num2||' is greater than '||num1);

    ELSE
        DBMS_OUTPUT.PUT_LINE(num2||' and '||num2||' are equal');

    END IF;

END;
/