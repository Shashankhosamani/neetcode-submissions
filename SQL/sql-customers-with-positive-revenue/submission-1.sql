select customers.customer_id from customers where customers.revenue > 0 AND year=2020 group by  customers.customer_id;
