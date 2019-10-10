SELECT products.name, providers.name FROM products 
JOIN providers ON products.id_providers = providers.id
JOIN categories ON products.id_categories = categories.id
WHERE products.id_categories = '6';