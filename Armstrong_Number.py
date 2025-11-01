# Armstrong Number check
n = 134
num = n
total = 0
count = 0

# Step 1: Count digits
while num > 0:
    count += 1
    num = num // 10

print("Total digits:", count)

# Step 2: Calculate sum of digits raised to power of count
num = n    # ✅ Reset num to original value
while num > 0:
    digit = num % 10
    total += digit ** count
    num = num // 10

print("Sum of powered digits:", total)

# Step 3: Check Armstrong condition
if total == n:
    print("✅ Armstrong number")
else:
    print("❌ Not an Armstrong number")
