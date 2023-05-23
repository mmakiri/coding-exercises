puts "Kirjoita jotain: "
syote = gets.chomp

ensimmaiset_kolme = syote[0, 3]
viimeiset_kaksi = syote[-2, 2]
kolmannesta_eteenpain = syote[2..-1]

puts "Ensimmäiset kolme merkkiä: #{ensimmaiset_kolme}"
puts "Viimeiset kaksi merkkiä: #{viimeiset_kaksi}"
puts "Kolmannesta merkistä eteenpäin: #{kolmannesta_eteenpain}"