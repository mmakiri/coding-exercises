muuttuja = "Balin palapelitehdas!!"
muuttuja = muuttuja[0..-3]
muuttuja.gsub!("li", "ke")

print muuttuja
