def read_segments():
    return [input() for _ in range(3)]


def get_digit_mapping():
    digit_mapping = {}
    for digit in range(10):
        digit_representation = [SEGMENTS[i][digit * 3:digit * 3 + 3] for i in range(3)]
        digit_mapping[digit] = digit_representation
    return digit_mapping


def is_valid_toggle(segment1, segment2):
    mismatch_count = 0
    for i in range(3):
        for j in range(3):
            if segment1[i][j] != segment2[i][j]:
                mismatch_count += 1
                if mismatch_count > 1:
                    return False  # More than one mismatch
    return True


def find_possible_numbers(led_input, digit_mapping):
    num_digits = len(led_input[0]) // 3
    total_sum = 0

    for digit_index in range(num_digits):
        digit_segment = [led_input[i][digit_index * 3:digit_index * 3 + 3] for i in range(3)]
        possible_digits = []

        for digit, original_segment in digit_mapping.items():
            if is_valid_toggle(digit_segment, original_segment):
                possible_digits.append(digit)

        if not possible_digits:
            return "Invalid"

        # Add all possible numbers to the total sum
        total_sum += sum(num * (10 ** (num_digits - digit_index - 1)) for num in possible_digits)

    return total_sum


# Read the input
SEGMENTS = read_segments()
DIGIT_MAPPING = get_digit_mapping()
LED_INPUT = read_segments()

# Calculate the result
result = find_possible_numbers(LED_INPUT, DIGIT_MAPPING)
print(result)
