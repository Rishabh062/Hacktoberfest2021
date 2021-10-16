select CONCAT(N," ",
              (CASE
              when P is null THEN "Root"
              when N in (select P from BST where P is not null) then "Inner"
              else "Leaf"
              end)
             ) from BST order by N;