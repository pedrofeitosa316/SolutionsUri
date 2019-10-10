SELECT products.name, categories.name FROM products
JOIN categories ON categories.id = products.id_categories
WHERE products.amount > 100 and products.id_categories in (1, 2, 3, 6, 9);