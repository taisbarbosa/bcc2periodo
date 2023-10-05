drop table if exists order_have_item;
drop table if exists order_pizza;
drop table if exists attendant;
drop table if exists delivery_man;
drop table if exists employee;
drop table if exists the_client;
drop table if exists district;
drop table if exists pizza_have_size;
drop table if exists size_pizza;
drop table if exists pizza;

create table pizza(
	number_pizza integer,
    name_pizza varchar(100),
    ingredients text,
    primary key (number_pizza)
);

create table size_pizza(
	name_size varchar(100)
);

create table pizza_have_size(
	number_have integer,
    name_size varchar(100),
    price decimal,
    primary key (number_have),
    foreign key(number_have) references pizza(number_pizza),
    foreign key(name_size) references size(name_size)
);
create table district(
    name_district varchar(100),
    delivery_time time,
    primary key (name_district)
);
create table the_client(
    phone varchar(8),
    name_client varchar(100),
    name_district varchar(100) not null,
    primary key (phone),
    foreign key(name_district) references district(name_district)
);
create table employee(
    id integer,
    name_employee varchar(100),
    primary key (id)
);

create table delivery_man(
    id integer,
    phone varchar(8),
    primary key (id),
    foreign key(id) references employee(id)
);
create table attendant(
    id integer,
    primary key (id),
    foreign key(id) references employee(id)
);

create table order_pizza(
    number_order integer,
    date_order date,
    address varchar(200),
    phone_client varchar(8),
    id_delivery_man integer,
    id_attendant integer,
    primary key (number_order),
    foreign key(phone_client) references the_client(phone),
    foreign key(id_delivery_man) references delivery_man(id),
    foreign key(id_attendant) references attendant(id)
);

create table order_have_item(
    number_pizza integer,
    name_size varchar(100),
    number_order integer,
    quantity integer,
    primary key (number_pizza, name_size, number_order),
    foreign key(number_pizza) references pizza(number_pizza),
    foreign key(name_size) references size(name_size),
    foreign key(number_order) references order_pizza(number_order)
);
