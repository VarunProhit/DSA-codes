const fs = require("fs");

// Function to update the README file
function updateReadme() {
	const files = fs.readdirSync("./"); // List files in the root directory
	const updatedContent = generateReadmeContent(files);

	// Update README.md with the generated content
	fs.writeFileSync("README.md", updatedContent);
}

// Function to generate README content
function generateReadmeContent(files) {
	const fileList = files.filter(
		(file) =>
			![
        ".git",
				".gitattributes",
				".gitignore",
				".github",
				".vscode",
				"node_modules",
				"package.json",
				"package-lock.json",
				"updateReadme.js",
				"README.md",
				"LICENSE",
			].includes(file)
	); // Exclude README.md
  const formattedFileList = fileList.map((file) => `- [${file}](./${file})`).join("\n");
	return `# Project Repository

## Files and Folders
${formattedFileList}
`;
}

// Execute the update
updateReadme();
