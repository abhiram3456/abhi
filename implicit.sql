DECLARE
cnt number;
BEGIN
UPDATE emp SET salary= salary + 500 where deptno='2' ;
cnt:=sql%rowcount;
dbms_output.put_line( cnt || ' rows updated');
END;
/
