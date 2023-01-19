SET SERVEROUTPUT ON

DECLARE
    emp_name employee.ename%TYPE;
    emp_salary employee.salary%TYPE;

BEGIN
    emp_name := '&emp_name';
    SELECT salary INTO emp_salary FROM employee WHERE ename = emp_name;

    DBMS_OUTPUT.PUT_LINE('Salary of '||emp_name||' is '||emp_salary);

EXCEPTION 
    WHEN NO_DATA_FOUND THEN
        DBMS_OUTPUT.PUT_LINE('No employee with given name, First hire him/her!!');

END;
/