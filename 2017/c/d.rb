s = gets.chomp

def getPalindrome(s)
  hash = {}
  odds = 0
  ans = 1
  i = 0
  j = s.size - 1
  fin = true
  s.split('').each do |c|
    if hash[c]
      hash[c] += 1
    else
      hash[c] = 1
    end
  end

  hash.each do |key, val|
    odds += 1 if val % 2 == 1
  end

  while odds > 1
    fin = false
    front = s[i]
    back = s[j]
    if hash[front] % 2 == 1
      hash[front] -= 1
      i += 1
      odds -= 1
    elsif hash[back] % 2 == 1
      hash[back] -= 1
      j -= 1
      odds -= 1
    else
      hash[front] -= 1
      i += 1
      odds += 1
    end
  end
  if fin
    return ans
  elsif j == s.size - 1
    return ans + getPalindrome(s[0..(i - 1)])
  elsif i == 0
    return ans + getPalindrome(s[(j + 1)..(s.size - 1)])
  else
    return ans + getPalindrome(s[0..(i - 1)]) + getPalindrome(s[(j + 1)..(s.size - 1)])
  end
end

puts getPalindrome(s)