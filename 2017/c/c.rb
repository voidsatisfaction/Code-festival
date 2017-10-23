s = gets.chomp
i = 0
j = s.size - 1
ans = 0
fin = false

while j > i
  front = s[i]
  back = s[j]
  if front != back && front != 'x' && back != 'x'
    fin = true
    break
  elsif front != back
    ans += 1
    if front == 'x'
      i += 1
    else
      j -= 1
    end
  else
    i += 1
    j -= 1
  end
end

if !fin
  puts ans
else
  puts -1
end