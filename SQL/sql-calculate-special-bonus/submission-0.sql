select employee_id,
       case
       when employee_id %2=1
        AND name NOT like 'M%'
        then salary 
        else 0
        end as bonus
    from employees
    order by employee_id;

    
    
    