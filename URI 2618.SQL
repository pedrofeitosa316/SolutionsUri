SELECT pr.name, pv.name, ca.name FROM products AS pr
JOIN providers AS pv ON pr.id_providers = pv.id
JOIN categories AS ca ON pr.id_categories = ca.id
WHERE pv.name = 'Sansul SA' and ca.name = 'Imported';
