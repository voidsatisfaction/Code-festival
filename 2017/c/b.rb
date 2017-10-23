N = gets.chomp.to_i
a = gets.chomp.split(' ').map{ |e| e.to_i }

allNums = 3**N
onlyOddNums = 1
a.each do |num|
  if num % 2 == 0
    onlyOddNums *= 2
  end
end

puts allNums - onlyOddNums