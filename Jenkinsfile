pipeline {
	agent any
	stages {
		stage('One') {
			steps {
				echo 'Welcome to Jenkins Pipeline'
			}
		}
		stage('Two') {
			steps {
				input('Do you want to proceed?')
			}
		}
		stage('Three') {
			when {
				not {
					branch "master"
				}
			}
			steps {
				echo "Welcome!"
			}
		}
		stage("Four"){
			parallel {
				stage("Unit Test") {
					steps {
						echo "Unit test excuting..."
					}
				}
				stage("Integration Test"){
					agent{
						UbuntuWorker{
							reuseNode true
							image 'ubuntu'
						}
					}
					steps {
						echo "Integration test executing..."
					}
				}
			}
		}
	}
}





