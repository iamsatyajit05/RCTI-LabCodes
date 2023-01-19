SET SERVEROUTPUT ON

DECLARE
    a_name ACCT_MSTR.acct_no%TYPE;
    not_null_account_number EXCEPTION;
    PRAGMA EXCEPTION_INIT(not_null_account_number, -1400);

BEGIN
    a_name := '&a_name';
    INSERT INTO ACCT_MSTR (acct_no, acct_balance) VALUES (a_name, 0);

    DBMS_OUTPUT.PUT_LINE('Account name created with '||a_name);

EXCEPTION 
    WHEN not_null_account_number THEN
        DBMS_OUTPUT.PUT_LINE('Please add valid account number, it cant be empty');

END;
/