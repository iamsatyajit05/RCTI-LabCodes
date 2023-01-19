SET SERVEROUTPUT ON

DECLARE
    a_name ACCT_MSTR.acct_no%TYPE;

BEGIN
    a_name := '&a_name';
    INSERT INTO ACCT_MSTR (acct_no, acct_balance) VALUES (a_name, 0);

    DBMS_OUTPUT.PUT_LINE('Account name created with '||a_name);

EXCEPTION 
    WHEN DUP_VAL_ON_INDEX THEN
        DBMS_OUTPUT.PUT_LINE('User already excited');

END;
/