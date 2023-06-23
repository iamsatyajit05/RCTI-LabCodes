SET SERVEROUTPUT ON

DECLARE
    a_name ACCT_MSTR.acct_no%TYPE;
    a_balance ACCT_MSTR.acct_balance%TYPE;
    negative_balance EXCEPTION;

BEGIN
    a_name := '&a_name';
    a_balance := &a_balance;
    IF a_balance > 0 THEN
        INSERT INTO ACCT_MSTR (acct_no, acct_balance) VALUES (a_name, a_balance);
        DBMS_OUTPUT.PUT_LINE('Account created');

    ELSE
        RAISE negative_balance;

    END IF;

EXCEPTION 
    WHEN negative_balance THEN
        DBMS_OUTPUT.PUT_LINE('Balance cant be negative, Learn Maths first');

END;
/