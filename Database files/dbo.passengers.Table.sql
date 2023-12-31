USE [bus]
GO
/****** Object:  Table [dbo].[passengers]    Script Date: 6/21/2023 2:46:55 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[passengers](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[username] [nvarchar](10) NOT NULL,
	[password] [nvarchar](10) NOT NULL,
	[name] [nvarchar](50) NOT NULL,
	[email] [nvarchar](20) NULL,
	[phone] [nvarchar](15) NULL,
	[address] [text] NULL,
	[balance] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
