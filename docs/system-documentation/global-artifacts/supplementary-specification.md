# Supplementary Specification (FURPS+)

## Functionality

_Specifies functionalities that:  
&nbsp; &nbsp; (i) are common across several US/UC;  
&nbsp; &nbsp; (ii) are not related to US/UC, namely: Audit, Reporting and Security._

### Security
- User authentication must be role-based
  - SNS User
  - Nurse User
  - Receptionist User
  - DGS Administrator User
- Access to patient health data must be restricted to authorized users only
  - Nurses have access
- System must maintain audit logs of vaccination events and certificate issuance

### Reporting
- System must be capable of generating vaccination certificates upon request
- System must track vaccination events
  - Including vaccine type, brand and lot number
- Post-vaccination reactions must be recorded and accessible for analysis
- System must only register the type of vaccine for the appointment <!-- Question 1 -->


## Usability 

_Evaluates the user interface. It has several subcategories,
among them: error prevention; interface aesthetics and design; help and
documentation; consistency and standards._

- The system must support elderly users, providing assistance through receptionists for appointment scheduling
- Interface must be intuitive enough for non-technical healthcare staff (i.e. receptionists)
- System must provide clear confirmation feedback for important operations
  - Appointment confirmation and arrival registration

## Reliability

_Refers to the integrity, compliance and interoperability of the software. The requirements to be considered are: frequency and severity of failure, possibility of recovery, possibility of prediction, accuracy, average time between failures._

- In case of failure, no data loss must occur
- System availability must exceed 99% annually
- System must ensure data integrity across vaccination records and certificates
- Recovery mechanisms must be in place to restore system state after failures

## Performance

_Evaluates the performance requirements of the software, namely: response time, start-up time, recovery time, memory consumption, CPU usage, load capacity and application availability._

- System must boot in less than 10 seconds
- Maximum response time must not exceed 5 seconds
  - Regardless of load conditions
- System must handle high user loads during peak periods
- Performance must remain consistent across all supported data persistence platforms

## Supportability

_The supportability requirements gathers several characteristics, such as:
testability, adaptability, maintainability, compatibility,
configurability, installability, scalability and more._

### Testability
- All code must be tested using the Google Testing Framework (C++)
- Unit tests must cover critical vaccination and appointment management functionality

### Adaptability
- System must support multiple data persistence platforms
  - Relational databases
  - NoSQL databases
  - In-memory databases

### Configurability
- DGS Administrators must be able to configure:
  - Vaccine types and related information
  - Vaccination center types
    - Healthcare Centers and Community Vaccination Centers
  - Staff records
    - Nurses and Receptionists
  - Which vaccines the patient is eligible for <!-- Question 2 -->
  - The most prioritary pandemic <!-- Question 3 -->

### Scalability
- System architecture must support scaling to handle pandemic-level vaccination campaigns across multiple centers

## +

### Design Constraints

_Specifies or constraints the system design process. Examples may include: programming languages, software process, mandatory standards/patterns, use of development tools, class library, etc._

- System must be developed in English
  - Code, tests and interface
- Google Testing Framework must be used for testing
- System architecture must support data persistence abstraction
  - For multiple database technologies to be used

### Implementation Constraints

_Specifies or constraints the code or construction of a system
such as: mandatory standards/patterns, implementation languages,
database integrity, resource limits, operating system._

- Programming language: C++
- Database integrity must be maintained across all supported persistence platforms
- Data persistence layer must work on every Operating System

### Interface Constraints

_Specifies or constraints the features inherent to the interaction of the
system being developed with other external systems._

- System must integrate with SNS infrastructure for:
  - SNS number validation
  - Patient health record access
  - Appointment verification