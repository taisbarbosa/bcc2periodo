drop table if exists my_table;

create table my_table(
	a integer,
    b integer,
    c integer
);

insert into my_table(a, b, c)values('3', '6', '10'),('1',null,'10'),('3','6',null),('3','6','5');

SELECT * FROM my_table AS t1
WHERE EXISTS (SELECT * FROM my_table t2 WHERE t1.a = t2.a AND t1.b = t2.b AND t1.c = t2.c)