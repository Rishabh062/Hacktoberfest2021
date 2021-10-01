--Query the NAME field for all American cities in the CITY table with populations larger than 120000. The CountryCode for America is USA.

SELECT NAME FROM CITY WHERE COUNTRYCODE="USA" AND POPULATION >120000 ;
