s = gets.chomp
i = 0
fin = false
while i < s.size - 1
  if s[i] == 'A' && s[i+1] == 'C'
    fin = true
    puts 'Yes'
    break
  end
  i += 1
end
if !fin
  puts 'No'
end