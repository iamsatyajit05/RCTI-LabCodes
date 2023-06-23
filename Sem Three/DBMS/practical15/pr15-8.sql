-- Write a PL/SQL block to calculate the area of a circle for a value varying from 3 to 7. Store the radius and the corresponding values of calculated area in an empty table named AREAS, consisting of two columns RADIUS and AREA using while loop.

SET SERVEROUTPUT ON

BEGIN
    FOR i in 3..7 LOOP
        INSERT INTO areas (radius, area) VALUES(i, 3.14*i*i);
    END LOOP;

    COMMIT;

END;
/