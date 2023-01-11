-- Write a PL/SQL block which finds simple interest.

SET SERVEROUTPUT ON

DECLARE
    principle NUMBER;
    rate NUMBER;
    years NUMBER;
    intrest NUMBER;

BEGIN
    principle := &principle;
    rate := &rate;
    years := &years;

    intrest := (principle * rate * years) / 100;

    DBMS_OUTPUT.PUT_LINE('Simple Intrest on '||principle||' INR at '||rate||'% for '||years||' years is '||intrest||' INR');

END;
/