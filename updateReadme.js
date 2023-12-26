const fs = require('fs');

// Function to update the README file
function updateReadme() {
  const files = fs.readdirSync('./'); // List files in the root directory
  const updatedContent = generateReadmeContent(files);

  // Update README.md with the generated content
  fs.writeFileSync('README.md', updatedContent);
}

// Function to generate README content
function generateReadmeContent(files) {
  const fileList = files.filter(file => file !== 'README.md'); // Exclude README.md
  const formattedFileList = fileList.map(file => `- ${file}`).join('\n');

  return `# Project Repository

## Files and Folders
${formattedFileList}
`;
}

// Execute the update
updateReadme();
