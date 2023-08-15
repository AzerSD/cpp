
function updateLog(monthSums) {
    for (const monthName in monthSums) {
        const originalElement = Array.from(document.querySelectorAll('svg text[font-size="10"]')).find(el => el.textContent.trim() === monthName);
        if (originalElement) {
            const svgNS = "http://www.w3.org/2000/svg";
            let logHourElement = document.querySelector(`text[data-month="${monthName}"]`);
            if (!logHourElement) {
                logHourElement = document.createElementNS(svgNS, 'text');
                logHourElement.setAttribute('x', originalElement.getAttribute('x'));
                logHourElement.setAttribute('y', parseFloat(originalElement.getAttribute('y')) + 15);
                logHourElement.setAttribute('fill', "#999");
                logHourElement.setAttribute('font-family', "sans-serif");
                logHourElement.setAttribute('font-size', "10");
                logHourElement.setAttribute('data-month', monthName);
                
                originalElement.parentNode.appendChild(logHourElement);
            }

            logHourElement.textContent = monthSums[monthName] + "h";
        }
    }
}

function calcLogHours() {
    const monthLabels = Array.from(document.querySelectorAll('svg text[font-size="10"]'));
    const months = {};
    let currentMonthLabel = null;
    monthLabels.forEach(label => {
    const monthName = label.textContent.trim();
    months[monthName] = [];
    currentMonthLabel = monthName;
    });
    const elements = document.querySelectorAll('svg text[font-size="10"], svg g[data-toggle="tooltip"][data-original-title]');
    elements.forEach(element => {
    const tagName = element.tagName.toLowerCase();
    if (tagName === 'text') {
        const monthName = element.textContent.trim();
        currentMonthLabel = monthName;
    } else if (tagName === 'g') {
        if (currentMonthLabel !== null) {
        months[currentMonthLabel].push(element);
        }
    }
    });
    const monthSums = {};
    for (const monthName in months) {
    monthSums[monthName] = 0;
    months[monthName].forEach(element => {
        const title = element.getAttribute('data-original-title');
        const time = parseFloat(title.replace("h", "."));
        if (!isNaN(time)) {
        monthSums[monthName] += Math.floor(time);
        monthSums[monthName] += (time - Math.floor(time)) / 6 * 10;
        }
    });
    return monthSums[monthName] = (monthSums[monthName] + ((monthSums[monthName] - Math.floor(monthSums[monthName])) * 0.6)).toFixed(2);
}

    addLogChild(monthSums)
}

calcLogHours();
updateLog();
setInterval(updateLog, 5 * 60 * 1000);