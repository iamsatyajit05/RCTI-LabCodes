-- Write a PL/SQL block which finds volume of cylinder.

SET SERVEROUTPUT ON

DECLARE
    pi NUMBER := 3.14;
    radius NUMBER;
    height NUMBER;
    volume NUMBER;

BEGIN
    radius := &radius;
    height := &height;

    volume := pi * radius * radius * height;

    DBMS_OUTPUT.PUT_LINE('Volume for a cylinder having '||radius||' unit radius and '||height||' unit height is '||volume||' unit cube');

END;
/