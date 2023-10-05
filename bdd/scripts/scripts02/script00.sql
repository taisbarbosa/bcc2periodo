drop table if exists person;
drop table if exists spouses;
drop table if exists person3;
drop table if exists person2;
drop table if exists person1;


create table person1(
	id integer,
    name_person varchar(100),
    id_spouse integer,
    primary key (id),
    foreign key(id_spouse) references person1(id)
);
create table person2(
	id integer,
    name_person varchar(100),
    id_spouse integer,
    primary key (id),
    foreign key(id_spouse) references person2(id)
);
create table person3(
	id integer,
    name_person varchar(100)
);

create table spouses(
	id_person1 integer,
    id_person2 integer,
    primary key(id_person1, id_person2),
    foreign key(id_person1) references person3(id),
    foreign key(id_person2) references person3(id)
);

create table person(
	id integer,
    id_boss integer,
    primary key (id),
    foreign key(id_boss) references person(id)
);
