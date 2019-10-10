SELECT customers.name, orders.id FROM customers
JOIN orders ON orders.id_customers = customers.id
WHERE orders.orders_date >= '2016-01-01' and 
orders.orders_date < '2016-07-01';