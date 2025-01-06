// Simple Calculator
function calculate() {
    const num1 = parseFloat(document.getElementById('num1').value);
    const num2 = parseFloat(document.getElementById('num2').value);
    const operator = document.getElementById('operator').value;
    let result;

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num2 !== 0 ? num1 / num2 : 'Error: Division by zero';
            break;
        default:
            result = 'Invalid operator';
    }

    document.getElementById('result').textContent = `Result: ${result}`;
}

// HTML structure
document.write(`
    <div style="font-family: Arial; text-align: center; margin-top: 50px;">
        <h1>Simple Calculator</h1>
        <input type="number" id="num1" placeholder="Enter first number" style="margin: 5px; padding: 10px; font-size: 16px;">
        <select id="operator" style="margin: 5px; padding: 10px; font-size: 16px;">
            <option value="+">+</option>
            <option value="-">-</option>
            <option value="*">*</option>
            <option value="/">/</option>
        </select>
        <input type="number" id="num2" placeholder="Enter second number" style="margin: 5px; padding: 10px; font-size: 16px;">
        <button onclick="calculate()" style="margin: 5px; padding: 10px; font-size: 16px; cursor: pointer;">Calculate</button>
        <p id="result" style="font-size: 18px; margin-top: 20px;"></p>
    </div>
`);
