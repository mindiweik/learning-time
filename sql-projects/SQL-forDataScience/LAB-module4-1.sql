--- PART A ---
--- ERROR BELOW ON PURPOSE TO PRACTICE --- 
select * from employees
	where salary > AVG(salary);
	
select EMP_ID, F_NAME, L_NAME, SALARY from employees
	where SALARY < 
		(select AVG(SALARY) from employees);
		
--- ERROR BELOW ON PURPOSE TO PRACTICE ---
select EMP_ID, SALARY, AVG(SALARY) as AVG_SALARY 
	from employees;
	
select EMP_ID, SALARY, 
	(select AVG(SALARY) from employees) as AVG_SALARY 
	from employees;
	
select * from
	(select EMP_ID, F_NAME, L_NAME, DEP_ID from employees)
	as EMP4ALL;
	

--- PART B ---
select * from employees 
	where DEP_ID in 
	(select DEPT_ID_DEP from departments);
	
select * from employees
	where DEP_ID in 
	(select DEPT_ID_DEP from departments
		where LOC_ID = 'L0002');
		
select DEPT_ID_DEP, DEP_NAME from departments
	where DEPT_ID_DEP in 
	(select DEP_ID from employees
		where SALARY > 70000);
		
select * from employees, departments;


--- PART C ---
select * from employees, departments
	where employees.DEP_ID = departments.DEPT_ID_DEP;
	
select * from employees E, departments D 
	where E.DEP_ID = D.DEPT_ID_DEP;
	
select EMP_ID, DEP_NAME
	from employees E, departments D
	where E.DEP_ID = D.DEPT_ID_DEP;
	
select E.EMP_ID, D.DEP_NAME
	from employees E, departments D
	where E.DEP_ID = D.DEPT_ID_DEP;