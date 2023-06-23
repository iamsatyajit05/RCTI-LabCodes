-- Write a PL/SQL block which takes two values as input and display sum, minus, multiplication and division of it.

SET SERVEROUTPUT ON

DECLARE
    num1 NUMBER;
    num2 NUMBER;
    addition NUMBER;
    sub NUMBER;
    multiplication NUMBER;
    division NUMBER;

BEGIN
    num1 := &num1;
    num2 := &num2;

    addition := num1 + num2;
    sub := num1 - num2;
    multiplication := num1 * num2;
    division := num1 / num2;

    DBMS_OUTPUT.PUT_LINE(num1||' + '||num2||' = '||addition);
    DBMS_OUTPUT.PUT_LINE(num1||' - '||num2||' = '||sub);
    DBMS_OUTPUT.PUT_LINE(num1||' * '||num2||' = '||multiplication);
    DBMS_OUTPUT.PUT_LINE(num1||' / '||num2||' = '||division);

END;
/