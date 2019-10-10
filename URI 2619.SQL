SELECT pr.name, pv.name, pr.price FROM products AS pr
JOIN providers AS pv ON pr.id_providers = pv.id
JOIN categories AS ca ON pr.id_categories = ca.id
WHERE pr.price > 1000 and ca.name = 'Super Luxury';