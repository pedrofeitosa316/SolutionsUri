SELECT products.name FROM products
JOIN providers ON products.id_providers = providers.id
WHERE (products.amount > 10 and products.amount < 20) and 
    providers.name like 'P%';