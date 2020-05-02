 select f_name, l_name 
 	from employees
 	where address like '%Elgin,IL%';
 	
 select f_name, l_name 
 	from employees
 	where B_DATE like '197%';
 	
 select * 
 	from employees
 	where dep_id='5'
 	and (salary between 60000 and 70000);
 	
 select f_name, l_name, dep_id 
 	from employees
 	order by l_name desc;
 	
 select f_name, l_name, dep_id 
 	from employees
 	order by 3 desc, 1 desc;
 	
 select dep_id, count(*) as count 
 	from employees
 	group by dep_id;
 	
 select dep_id, count(*) as NUM_EMPLOYEES, avg(salary) as AVG_SALARY 
 	from employees
 	group by dep_id
 	having count(*) < 4
 	order by AVG_SALARY;