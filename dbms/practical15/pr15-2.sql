-- Write a PL/SQL block to find area of circle.

SET SERVEROUTPUT ON

DECLARE
    pi NUMBER := 3.14;
    radius NUMBER;
    area NUMBER;

BEGIN
    radius := &radius;

    area := pi * radius * radius;

    DBMS_OUTPUT.PUT_LINE('Area for a cricle having '||radius||' unit is '||area||' unit square');

END;
/