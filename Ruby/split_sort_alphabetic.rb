print "Kirjoita jotain: "
syote = gets.chomp

taulukko = syote.split(" ")

taulukko.uniq!
taulukko.sort!

puts "Tässä sanat aakkosjärjestyksessä:"
puts taulukko
