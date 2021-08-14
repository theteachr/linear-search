let search collection key  =
  let rec _search index key = function
      | [] -> None
      | h::t -> if h == key then Some index else
          _search (index+1) key t
  in _search 0 key collection
;;

let nums = [12; 2; 0; 81]
;;
