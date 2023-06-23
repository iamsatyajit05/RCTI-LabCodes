SET SERVEROUTPUT ON

DECLARE
    CURSOR emp_cursor(p_salary NUMBER) IS
    SELECT ename, salary FROM employee
    WHERE salary < p_salary;

    arg_name employee.ename%TYPE;
    arg_salary employee.salary%TYPE;

BEGIN
    OPEN emp_cursor(400);
    LOOP
        FETCH emp_cursor INTO arg_name, arg_salary;
        EXIT WHEN emp_cursor%NOTFOUND;

        DBMS_OUTPUT.PUT_LINE(arg_name||' '||arg_salary);
    END LOOP;
    CLOSE emp_cursor;

END;
/